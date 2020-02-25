#ifndef D3__EASE__TEST__IN_DELTA_HPP
#define D3__EASE__TEST__IN_DELTA_HPP

#include "catch/catch.hpp"

#include <sstream> // for std::ostringstream

class InDelta : public Catch::MatcherBase<double>
{
    const double& m_expected;

public:

    InDelta(const double& expected)
        : m_expected(expected)
    {}

    // Performs the test for this matcher
    bool match(const double& actual) const override
    {
        return (m_expected - 1e-6 < actual) && (actual < m_expected + 1e-6);
    }

    // Produces a string describing what this matcher does. It should include
    // any provided data and be written as if it were stating a fact (in the
    // output it will be preceded by the value under test).
    virtual std::string describe() const override {
        std::ostringstream ss;
        ss << "Should be equal to: " << m_expected;
        return ss.str();
    }
};

// The builder function
inline InDelta inDelta(const double& value) {
    return InDelta(value);
}

#endif // D3__EASE__TEST__IN_DELTA_HPP
