/* Entry 0x08935EC8 | file offset 0x00132EA0 | FUN_08935ec8 | bytes 100 */

undefined4 FUN_08935ec8(int param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = param_2 + -1;
  if ((0 < param_2) && ('4' < *(char *)(param_1 + iVar3))) {
    do {
      puVar2 = (undefined1 *)(param_1 + iVar3);
      iVar3 = iVar3 + -1;
      *puVar2 = 0x30;
      cVar1 = *(char *)(iVar3 + param_1);
      if (iVar3 < 1) break;
    } while (cVar1 == '9');
    if (cVar1 == '9') {
      return 0;
    }
    *(char *)(iVar3 + param_1) = cVar1 + '\x01';
  }
  return 1;
}

