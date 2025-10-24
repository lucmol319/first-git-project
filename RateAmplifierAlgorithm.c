// End of May 2023 to end of March 2025
// Sub count at start of June 2023
// Most start at June so they have 22 months
// Ray and Peo start at September so they have 19
// Euphoria start at January 2024 so they have 15
// Kaleidos start at February 2024 so they have 14
// Questtakers start at March 2025 so they have 1
#include <stdio.h>
#include <math.h>
int main(){
    int initial_subs = 230000;
    int former_subs = 391000;
    int months = 22;
    int per_month = (former_subs - initial_subs) / months;
    printf("Per month: %d\n", per_month);
    int rate_amplifier = 2;
    double increase_rate = 0.00;
    for (int i = 0; i < months; i++) {
        increase_rate = ((double)(initial_subs + per_month) / initial_subs) - 1.00;
        initial_subs += round(initial_subs * (increase_rate * rate_amplifier));
        printf("Modified Sub Count: %d\n", initial_subs);
    }
    double increase_ratio = (((double)(initial_subs) / former_subs) - 1.00) * 100.00;
    printf("End of March 2025 New Sub Count: %d\n", initial_subs);
    printf("%.5f Percent Increase\n", increase_ratio);
    return 0;
}
// Pippa(22;2):230000->391000, 552000
// Rie(22;6):28900->113000, 533400
// Shiina(22;3):54200->178000, 425580
// Tenma(22;4):115000->225000, 555000
// Runie(15;9):11600->45300, 314738
// Ashelia(22;6):57000->123000, 453000
// Uruka(22;6):46900->128000, 533450
// Lumi(22;8):53500->110000, 505470
// Jelly(22;7):13800->75100, 442840
// Clara(14;6):7180->66300, 361830
// Ray(19;3):62700->184000, 426590
// Peo(19;)
// Clio(1;)
// Mari(1;)
// Two arrays: pre-anime, post-anime (end of March to end of December?)