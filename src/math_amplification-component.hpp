#ifndef OROCOS_MATH_AMPLIFICATION_COMPONENT_HPP
#define OROCOS_MATH_AMPLIFICATION_COMPONENT_HPP

#include <rtt/RTT.hpp>

class Math_amplification : public RTT::TaskContext{
  public:
    Math_amplification(std::string const& name);
    bool configureHook();
    bool startHook();
    void updateHook();
    void stopHook();
    void cleanupHook();
  private:
    RTT::InputPort<double> _evPort;
    RTT::OutputPort<double> _outPort;
    double k;
    void ChangeCoefficient(double in);
};
#endif
