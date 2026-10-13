/* Entry 0x088E01C4 | file offset 0x000DD19C | FUN_088e01c4 | bytes 460 */

void FUN_088e01c4(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x17b9);
  if (cVar1 == '\0') {
    FUN_088e6ebc(param_1 + 0xe00);
    cVar1 = *(char *)(param_1 + 0x17b9);
  }
  if (cVar1 == '\0') {
    FUN_088e82a4(param_1 + 0x1220,param_2);
    cVar1 = *(char *)(param_1 + 0x17b9);
  }
  if (cVar1 == '\0') {
    FUN_088e0888(param_1,param_2);
  }
  FUN_088e2e00(param_1 + 0x5bc,*(undefined4 *)(param_1 + 4),param_2);
  if ((*(char *)(param_1 + 0x17b9) == '\0') && (param_2 == '\0')) {
    FUN_088e3194(param_1 + 0x5bc,*(undefined4 *)(param_1 + 4));
  }
  FUN_088ea884(param_1 + 0x128c,param_2);
  if (*(char *)(param_1 + 0x17ba) != '\0') {
    FUN_088e6794(param_1 + 0x12b0,param_2);
  }
  if (*(char *)(param_1 + 0x17b9) == '\0') {
    FUN_088eac10(param_1 + 0x12d8,param_2);
  }
  FUN_088ea3cc(param_1 + 0x135c);
  iVar2 = 0;
  iVar3 = param_1;
  do {
    iVar4 = *(int *)(iVar3 + 0x53c);
    if (iVar4 != 0) {
      FUN_08846628(iVar4,iVar3,iVar4,&PTR_caseD_893c500_089d0000);
      FUN_0885c538(*(undefined4 *)(DAT_089d4960 + 4),iVar4,0);
      *(undefined4 *)(iVar3 + 0x53c) = 0;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0x20);
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_0885c538(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8),0);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_088cb9c8();
      FUN_0886278c(*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  if (-1 < *(int *)(param_1 + 0x1708)) {
    FUN_088a0dfc(DAT_089d6c80,*(int *)(param_1 + 0x1708));
    *(undefined4 *)(param_1 + 0x1708) = 0xffffffff;
  }
  FUN_088dfe58(param_1,param_2);
  return;
}

