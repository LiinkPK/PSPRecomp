/* Entry 0x0892E318 | file offset 0x0012B2F0 | FUN_0892e318 | bytes 100 */

undefined4 FUN_0892e318(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0892e5dc();
  if ((iVar1 == 1) &&
     (iVar1 = (**(code **)(*(int *)(param_1 + 0x24) + 0x4c))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x48)), iVar1 != 0)) {
    FUN_0892e5b4(param_1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

