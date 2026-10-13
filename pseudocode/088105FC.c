/* Entry 0x088105FC | file offset 0x0000D5D4 | FUN_088105fc | bytes 124 */

undefined4 FUN_088105fc(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_088105e0();
  if ((param_2 == 0) || (param_3 < 1)) {
    uVar2 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 4) = param_2;
    iVar1 = FUN_088106ac(param_1,param_2,param_3);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}

