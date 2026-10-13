/* Entry 0x08907A04 | file offset 0x001049DC | FUN_08907a04 | bytes 188 */

void FUN_08907a04(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 1;
  if (*(int *)(param_1 + 0x1644) == 0) {
    iVar6 = *(int *)(param_1 + 0x804);
  }
  bVar1 = true;
  iVar5 = 0;
  iVar4 = param_1 + 0x808;
  do {
    iVar2 = FUN_08906a98(iVar4);
    if (iVar2 != iVar6) {
      bVar1 = false;
      break;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x2e0;
  } while (iVar5 < 3);
  if (bVar1) {
    piVar3 = *(int **)(param_1 + 0x1660);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x3c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x38));
    }
    *(undefined4 *)(param_1 + 0x1658) = 6;
  }
  return;
}

