#include <stdio.h>
//0부터 15까지 출력되도록 하라.
typedef enum _INTERFACE_TYPE { 
    InterfaceTypeUndefined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPISABus,
    PNPBus,
    MaximumInterfaceType
} INTERFACE_TYPE, *PINTERFACE_TYPE;

int main()
{
    for (int i = Internal; i < MaximumInterfaceType; i++) //열거형 멤버변수가 -1부터 시작했으므로 그 다음에 있는 Internal부터 시작해야 0부터 출력된다.
    {
        printf("%d ", i);
    }
    
    return 0;
}