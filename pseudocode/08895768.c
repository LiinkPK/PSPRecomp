/* Entry 0x08895768 | file offset 0x00092740 | FUN_08895768 | bytes 260 */

void FUN_08895768(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = (char *)*param_1;
  while (pcVar1 = pcVar5, pcVar1 != (char *)0x0) {
    if (pcVar1 == (char *)0x0) {
      pcVar5 = (char *)*param_1;
    }
    else {
      pcVar5 = *(char **)(pcVar1 + 4);
    }
    (**(code **)(*(int *)(pcVar1 + 8) + 0x14))(pcVar1 + *(short *)(*(int *)(pcVar1 + 8) + 0x10));
    if (*pcVar1 == '\x01') {
      pcVar2 = (char *)*param_1;
      if ((pcVar2 != (char *)0x0) && (pcVar4 = (char *)param_1[1], pcVar4 != (char *)0x0)) {
        uVar3 = *(undefined4 *)(pcVar1 + 4);
        if (pcVar1 == pcVar2) {
          *param_1 = uVar3;
          pcVar2 = (char *)0x0;
        }
        else {
          pcVar4 = *(char **)(pcVar2 + 4);
          if (*(char **)(pcVar2 + 4) == pcVar1) {
            *(undefined4 *)(pcVar2 + 4) = uVar3;
          }
          else {
            do {
              pcVar2 = pcVar4;
              pcVar4 = *(char **)(pcVar2 + 4);
            } while (*(char **)(pcVar2 + 4) != pcVar1);
            *(undefined4 *)(pcVar2 + 4) = uVar3;
          }
          pcVar4 = (char *)param_1[1];
        }
        if (pcVar1 == pcVar4) {
          param_1[1] = pcVar2;
        }
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
      }
      if (pcVar1 != (char *)0x0) {
        (**(code **)(*(int *)(pcVar1 + 8) + 0xc))(pcVar1 + *(short *)(*(int *)(pcVar1 + 8) + 8),3);
      }
    }
  }
  return;
}

