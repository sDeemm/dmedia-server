#include <stdio.h>
#include <memory>
#include <vector>

int main(int argc, char *argv[])
{
    printf("Hello world\n");
    std::unique_ptr<int> pnum( new int{55} );

    printf("number is: %i\n", *pnum);

    printf("Print list:\n");

    {
        std::vector<int16_t> nums{ 1, 2, 3};
        for (const auto& n : nums) {
            printf("%i\n", n);
        }
    }

    return 0;
}
