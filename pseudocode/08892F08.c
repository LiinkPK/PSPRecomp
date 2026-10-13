/* Entry 0x08892F08 | file offset 0x0008FEE0 | FUN_08892f08 | bytes 200 */

void FUN_08892f08(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4d0) != param_2) {
    if (param_2 == -1) {
      FUN_088953f0(param_1);
      (**(code **)(*(int *)(param_1 + 0x734) + 0xc))
                (param_1 + *(short *)(*(int *)(param_1 + 0x734) + 8));
      FUN_08890a60(1);
    }
    else {
      iVar1 = param_1 + param_2 * 0x130;
      iVar2 = iVar1 + 0x140;
      FUN_088953f0(iVar2);
      iVar1 = *(int *)(iVar1 + 0x260);
      (**(code **)(iVar1 + 0xc))(iVar2 + *(short *)(iVar1 + 8));
      FUN_08890a2c(1);
    }
    *(int *)(param_1 + 0x4d0) = param_2;
  }
  return;
}

