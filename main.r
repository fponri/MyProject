#Florinda Ponari
#The probability density function of random variable X is f(x) = 16·x·e−4x for 0 ≤ x ≤ ∞ and 0 otherwise. Do computations using the R integrate function. f <- function(x) {ifelse(x >= 0, 16 * x * exp(-4 * x), 0)}
f <- function(x) {
ifelse(x >= 0, 16 * x * exp(-4 * x), 0)
}


# part a: Find the probability that X > 1.5
prob_X_greater_1_5 <- integrate(f, lower = 1.5, upper = Inf)$value
cat("P(X > 1.5):", prob_X_greater_1_5, "\n")

# part b: Find the probability that 1.5 < X < 2.5
prob_1_5_less_X_less_2_5 <- integrate(f, lower = 1.5, upper = 2.5)$value
cat("P(1.5 < X < 2.5):", prob_1_5_less_X_less_2_5, "\n")

# part c: Find the expected value of X
expected_X <- integrate(function(x) x * f(x), lower = 0, upper = Inf)$value
cat("E(X):", expected_X, "\n")

# part d: Find the variance of X 
expected_X2 <- integrate(function(x) x^2 * f(x), lower = 0, upper = Inf)$value
variance_X <- expected_X2 - expected_X^2
cat("Var(X):", variance_X, "\n")

# part e: Find the standard deviation of X
std_dev_X <- sqrt(variance_X)
cat("SD(X):", std_dev_X, "\n")

# part f: Find the probability that X is within 0.75 standard deviations of its expected value
lower_bound <- expected_X - 0.75 * std_dev_X
upper_bound <- expected_X + 0.75 * std_dev_X
prob_within_075_sd <- integrate(f, lower = lower_bound, upper = upper_bound)$value
cat("P(X within 0.75 SD of E(X)):", prob_within_075_sd, "\n")