/* Entry 0x0881CE04 | file offset 0x00019DDC | FUN_0881ce04 | bytes 336 */

undefined4 FUN_0881ce04(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*param_1 == '\0') {
    uVar2 = 0;
  }
  else if (param_1[8] == '\x01') {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0881a410(param_1 + 0x34,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar4 = 0;
      iVar3 = *(int *)(DAT_089d4910 + 0xd8);
      iVar5 = 0;
      iVar1 = DAT_089d4910;
      if (0 < iVar3) {
        do {
          iVar7 = 0;
          puVar6 = (undefined4 *)(*(int *)(iVar1 + 0xdc) + iVar5);
          if (0 < (int)puVar6[3]) {
            do {
              if ((*(int *)(*(int *)(iVar1 + 0xf4) + (puVar6[4] + iVar7) * 4) == param_2) &&
                 (iVar3 = FUN_0881d7b0(param_1,*puVar6,param_2), iVar1 = DAT_089d4910, iVar3 == 1))
              {
                return 0;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)puVar6[3]);
            iVar3 = *(int *)(iVar1 + 0xd8);
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x14;
        } while (iVar4 < iVar3);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

