/* Entry 0x08939948 | file offset 0x00136920 | FUN_08939948 | bytes 172 */

void FUN_08939948(uint param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = (int)param_1 < 0;
  if ((bVar1) && (param_3 == 10)) {
    param_1 = -param_1;
  }
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    uVar5 = param_1 % param_3;
    iVar4 = iVar3 + 1;
    param_1 = param_1 / param_3;
    *(wchar_t *)(param_2 + iVar3 * 2) = u_0123456789abcdefghijklmnopqrstuv_089d8920[uVar5];
  } while (param_1 != 0);
  if (bVar1) {
    iVar2 = iVar4 * 2;
    iVar4 = iVar3 + 2;
    *(undefined2 *)(param_2 + iVar2) = 0x2d;
  }
  *(undefined2 *)(param_2 + iVar4 * 2) = 0;
  FUN_089398dc(param_2);
  return;
}

