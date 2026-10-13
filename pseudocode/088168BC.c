/* Entry 0x088168BC | file offset 0x00013894 | FUN_088168bc | bytes 324 */

undefined4 FUN_088168bc(char *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*param_1 == '\0') {
    uVar4 = 0xffffffff;
  }
  else {
    uVar1 = FUN_08899300();
    FUN_0881baa8();
    uVar4 = DAT_089d4910;
    iVar6 = 0;
    while (iVar6 = FUN_0881cb80(iVar6), iVar6 != 0) {
      iVar8 = *(int *)(iVar6 + 0x48);
      if ((iVar8 != 0) && (iVar5 = (int)*(short *)(iVar8 + 0x20), iVar5 != 0)) {
        iVar7 = 0;
        if (0 < iVar5) {
          do {
            uVar2 = FUN_0881e8f4(uVar4,iVar8,iVar7);
            iVar3 = FUN_088987e8(uVar1,uVar2);
            iVar5 = (int)*(short *)(iVar8 + 0x20);
            if (iVar3 != 0) break;
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar5);
        }
        if (iVar7 == iVar5) {
          FUN_08819624(iVar6,0,1,0,param_2 != 0,1,1);
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

