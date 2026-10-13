/* Entry 0x08819C90 | file offset 0x00016C68 | FUN_08819c90 | bytes 224 */

undefined4 FUN_08819c90(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    pcVar5 = param_1;
    do {
      if (*(int *)(pcVar5 + 4) == 0) break;
      iVar2 = FUN_088a751c();
      if (iVar2 == 1) {
        uVar6 = uVar6 + 1;
        pcVar5 = pcVar5 + 4;
      }
      else if ((int)uVar6 < 3) {
        pcVar3 = param_1 + uVar6 * 4;
        uVar4 = uVar6;
        do {
          uVar4 = uVar4 + 1;
          if (uVar4 < 3) {
            *(undefined4 *)(pcVar3 + 4) = *(undefined4 *)(param_1 + uVar4 * 4 + 4);
          }
          else {
            pcVar3[4] = '\0';
            pcVar3[5] = '\0';
            pcVar3[6] = '\0';
            pcVar3[7] = '\0';
          }
          pcVar3 = pcVar3 + 4;
        } while ((int)uVar4 < 3);
      }
    } while ((int)uVar6 < 3);
    param_1[1] = '\0';
    uVar1 = 0;
  }
  return uVar1;
}

