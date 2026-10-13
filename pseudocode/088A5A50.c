/* Entry 0x088A5A50 | file offset 0x000A2A28 | FUN_088a5a50 | bytes 72 */

int FUN_088a5a50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (*(char *)(iVar1 + 100) == '\0') {
      return param_1 + iVar2;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x68;
    iVar1 = iVar1 + 0x68;
  } while (iVar3 < 0x2d);
  return 0;
}

