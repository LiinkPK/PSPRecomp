/* Entry 0x08833228 | file offset 0x00030200 | FUN_08833228 | bytes 312 */

void FUN_08833228(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = false;
  if (((*(uint *)(param_1 + 900) & 0x200000) == 0) && ((*(uint *)(param_1 + 0x380) & 0x20) == 0)) {
    if (*(short *)(param_1 + 0x540) < 0) {
      iVar2 = (**(code **)(*(int *)(param_1 + 0x544) + 0xdc))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0xd8));
      if ((iVar2 == 0) || (iVar2 = FUN_08837310(param_1), iVar2 != 0)) {
        bVar1 = true;
      }
    }
    else if (*(short *)(param_1 + 0x180) != *(short *)(param_1 + 0x540)) {
      bVar1 = true;
      *(undefined2 *)(param_1 + 0x540) = 0xffff;
    }
  }
  if (bVar1) {
    FUN_088341a4(param_1);
  }
  iVar2 = FUN_08837310(param_1);
  if ((iVar2 == 0) && (iVar2 = FUN_088377c0(param_1), iVar2 == 0)) {
    uVar3 = *(uint *)(param_1 + 900);
    *(uint *)(param_1 + 900) = uVar3 & 0xfffbffff;
    *(uint *)(param_1 + 900) = uVar3 & 0xf7fbffff;
  }
  *(uint *)(param_1 + 900) = *(uint *)(param_1 + 900) & 0xefffffff;
  iVar2 = *(int *)(param_1 + 0x534);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x302) = 1;
    *(undefined1 *)(iVar2 + 0x303) = 1;
  }
  return;
}

