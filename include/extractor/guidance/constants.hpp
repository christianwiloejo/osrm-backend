#ifndef OSRM_EXTRACTOR_GUIDANCE_CONSTANTS_HPP_
#define OSRM_EXTRACTOR_GUIDANCE_CONSTANTS_HPP_

namespace osrm
{
namespace extractor
{
namespace guidance
{

const bool constexpr INVERT = true;

// what angle is interpreted as going straight
const double constexpr STRAIGHT_ANGLE = 180.;
const double constexpr ORTHOGONAL_ANGLE = 90.;
// if a turn deviates this much from going straight, it will be kept straight
const double constexpr MAXIMAL_ALLOWED_NO_TURN_DEVIATION = 3.;
// angle that lies between two nearly indistinguishable roads
const double constexpr NARROW_TURN_ANGLE = 40.;
const double constexpr GROUP_ANGLE = 60;
// angle difference that can be classified as straight, if its the only narrow turn
const double constexpr FUZZY_ANGLE_DIFFERENCE = 25.;
const double constexpr DISTINCTION_RATIO = 2;

// Named roundabouts with radii larger then than this are seen as rotary
const double constexpr MAX_ROUNDABOUT_RADIUS = 15;
// Unnamed small roundabouts that look like intersections are announced as turns,
// guard against data issues or such roundabout intersections getting too large.
const double constexpr MAX_ROUNDABOUT_INTERSECTION_RADIUS = 15;

const double constexpr INCREASES_BY_FOURTY_PERCENT = 1.4;

const int constexpr MAX_SLIPROAD_THRESHOLD = 250;

// Road priorities give an idea of how obvious a turn is. If two priorities differ greatly (e.g.
// service road over a primary road, the better priority can be seen as obvious due to its road
// category).
const double constexpr PRIORITY_DISTINCTION_FACTOR = 1.75;

// the lane width we assume for a single lane
const auto constexpr ASSUMED_LANE_WIDTH = 3.25;

// how far apart can roads be at the most, when thinking about merging them?
const auto constexpr MERGABLE_ANGLE_DIFFERENCE = 95.0;

} // namespace guidance
} // namespace extractor
} // namespace osrm

#endif // OSRM_EXTRACTOR_GUIDANCE_CONSTANTS_HPP_
