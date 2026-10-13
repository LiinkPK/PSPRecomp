/* Entry 0x0889245C | file offset 0x0008F434 | FUN_0889245c | bytes 296 */

void FUN_0889245c(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  piVar3 = (int *)FUN_08899300();
  if (*piVar3 != 0) {
    iVar7 = 0;
    iVar6 = param_1;
    do {
      if (-1 < *(short *)(iVar6 + 0x612)) {
        uVar2 = param_2 & 1;
        if ((*(char *)(iVar6 + 0x616) == '\0') && (*(char *)(iVar6 + 0x61a) < '\x01')) {
          uVar2 = param_2 & 2;
        }
        if (uVar2 != 0) {
          uVar4 = FUN_08899300();
          uVar4 = FUN_088985f0(uVar4,(int)*(short *)(iVar6 + 0x612));
          cVar1 = *(char *)(iVar6 + 0x618);
          if (cVar1 != '\0') {
            uVar8 = *(undefined4 *)(param_1 + 0x74);
            uVar5 = FUN_08893a18(param_1);
            FUN_0886c38c(uVar8,uVar4,1,cVar1,uVar5,0);
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 10;
    } while (iVar7 < 0x10);
  }
  return;
}

