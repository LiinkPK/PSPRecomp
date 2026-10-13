/* Entry 0x08857AFC | file offset 0x00054AD4 | FUN_08857afc | bytes 368 */

int FUN_08857afc(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined1 auStack_40 [16];
  
  iVar5 = 0;
  iVar7 = 0;
  pcVar6 = (char *)(param_1 + 0x20);
  do {
    if (*pcVar6 != '\0') {
      FUN_089a3868(auStack_40,pcVar6 + 0x40);
      FUN_089a4af8(auStack_50,DAT_089d5ec0 + 0x830,auStack_40);
      *(undefined4 *)(pcVar6 + 0x5c) = local_48;
      piVar2 = param_2 + iVar5;
      iVar5 = iVar5 + 1;
      *piVar2 = iVar7;
    }
    iVar7 = iVar7 + 1;
    pcVar6 = pcVar6 + 0x60;
  } while (iVar7 < 0x28);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar7 = 0;
    piVar2 = param_2;
    if (0 < iVar5) {
      do {
        if (iVar7 < iVar5) {
          piVar4 = param_2 + iVar7;
          iVar1 = iVar7;
          do {
            iVar3 = *piVar2;
            if (*(float *)(param_1 + iVar3 * 0x60 + 0x7c) <
                *(float *)(param_1 + *piVar4 * 0x60 + 0x7c)) {
              *piVar2 = *piVar4;
              *piVar4 = iVar3;
            }
            iVar1 = iVar1 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar1 < iVar5);
        }
        iVar7 = iVar7 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar7 < iVar5);
    }
  }
  return iVar5;
}

