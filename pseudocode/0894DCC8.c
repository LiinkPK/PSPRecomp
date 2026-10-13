/* Entry 0x0894DCC8 | file offset 0x0014ACA0 | FUN_0894dcc8 | bytes 172 */

void FUN_0894dcc8(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == 'l') {
    iVar2 = 0;
    iVar1 = 0;
    if (*(short *)(param_2 + 4) != 0) {
      do {
        if (*(int *)(*(int *)(param_2 + 0x30) + iVar1) != 0) {
          FUN_0894dcc8(param_1,*(int *)(*(int *)(param_2 + 0x30) + iVar1));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 4));
    }
  }
  else {
    param_2[0x170] = '\0';
    param_2[0x171] = '\0';
    param_2[0x172] = '\0';
    param_2[0x173] = '\0';
    param_2[0x174] = '\0';
    param_2[0x175] = '\0';
    param_2[0x176] = '\0';
    param_2[0x177] = '\0';
  }
  return;
}

