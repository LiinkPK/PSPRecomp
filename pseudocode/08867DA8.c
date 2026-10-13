/* Entry 0x08867DA8 | file offset 0x00064D80 | FUN_08867da8 | bytes 192 */

void FUN_08867da8(char *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char local_f [3];
  
  puVar2 = (ushort *)FUN_08885cfc(3);
  if ((puVar2 != (ushort *)0x0) && (uVar1 = *puVar2, uVar1 < 0x81)) {
    local_f[0] = '\0';
    cVar3 = *param_1;
    while (cVar3 != '\0') {
      cVar4 = '/';
      iVar5 = 0;
      while (cVar4 != '\0') {
        if (cVar3 == cVar4) {
          *param_1 = (char)uVar1;
          break;
        }
        cVar4 = local_f[iVar5];
        iVar5 = iVar5 + 1;
      }
      param_1 = param_1 + 1;
      cVar3 = *param_1;
    }
  }
  return;
}

