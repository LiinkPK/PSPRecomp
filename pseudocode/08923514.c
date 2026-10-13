/* Entry 0x08923514 | file offset 0x001204EC | FUN_08923514 | bytes 88 */

undefined4 FUN_08923514(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0892346c();
  if ((iVar1 == 0) || (*(short *)(param_1 + 2) != 1)) {
    uVar2 = 0;
  }
  else {
    FUN_08924ce4(param_1,2,0);
    uVar2 = 1;
  }
  return uVar2;
}

