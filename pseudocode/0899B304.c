/* Entry 0x0899B304 | file offset 0x001982DC | FUN_0899b304 | bytes 212 */

void FUN_0899b304(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0899a7ec(param_2);
  uVar1 = FUN_0899a1f4((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,0x40f00000);
  uVar2 = FUN_0899a1f4((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,0x40f00000);
  uVar1 = FUN_0899a7ec(param_1);
  if (param_1 < 0) {
    uVar1 = FUN_0899a118((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,0x41f00000);
  }
  FUN_0899a118((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar1,(int)((ulonglong)uVar1 >> 0x20)
              );
  return;
}

