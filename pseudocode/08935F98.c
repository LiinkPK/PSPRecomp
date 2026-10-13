/* Entry 0x08935F98 | file offset 0x00132F70 | FUN_08935f98 | bytes 156 */

void FUN_08935f98(uint param_1,int param_2,uint param_3)

{
  bool bVar1;
  undefined1 *puVar2;
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
    *(char *)(param_2 + iVar3) = s_0123456789abcdefghijklmnopqrstuv_089d88e8[uVar5];
  } while (param_1 != 0);
  if (bVar1) {
    puVar2 = (undefined1 *)(param_2 + iVar4);
    iVar4 = iVar3 + 2;
    *puVar2 = 0x2d;
  }
  *(undefined1 *)(iVar4 + param_2) = 0;
  FUN_08935f2c(param_2);
  return;
}

