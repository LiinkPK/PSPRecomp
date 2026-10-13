/* Entry 0x08819D70 | file offset 0x00016D48 | FUN_08819d70 | bytes 172 */

undefined4 FUN_08819d70(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    iVar3 = 0;
    pcVar2 = param_1;
    do {
      if (*(int *)(pcVar2 + 4) == 0) {
        *(undefined4 *)(pcVar2 + 4) = param_2;
        if (iVar3 == 2) {
          FUN_088a6c70(*(undefined4 *)(param_1 + 4));
          iVar3 = 0;
          pcVar2 = param_1;
          do {
            iVar3 = iVar3 + 1;
            *(undefined4 *)(pcVar2 + 4) = *(undefined4 *)(pcVar2 + 8);
            pcVar2 = pcVar2 + 4;
          } while (iVar3 < 2);
          param_1[0xc] = '\0';
          param_1[0xd] = '\0';
          param_1[0xe] = '\0';
          param_1[0xf] = '\0';
          param_1[1] = '\x01';
        }
        break;
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 4;
    } while (iVar3 < 3);
    uVar1 = 0;
  }
  return uVar1;
}

