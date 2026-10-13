/* Entry 0x088F715C | file offset 0x000F4134 | FUN_088f715c | bytes 504 */

/* WARNING: Type propagation algorithm not settling */

void FUN_088f715c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_50 [3];
  undefined4 local_44;
  int local_40 [3];
  undefined4 local_34;
  int local_30;
  
  iVar1 = DAT_089d8364;
  FUN_089074a8(DAT_089d8364);
  if (DAT_089d7f44 == 0) {
    iVar3 = *(int *)(iVar1 + 0x804);
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        local_50[1] = 0xdbdc;
        local_50[0] = DAT_089d7f38;
        FUN_08907400(iVar1,iVar5,local_50);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    iVar7 = 0;
    iVar5 = 0;
    iVar3 = 0;
    do {
      iVar4 = 0;
      iVar6 = 0;
      do {
        iVar2 = (int)*(char *)(DAT_089d7f40 + iVar5 + iVar4);
        if (0 < iVar2) {
          local_44 = 0x1548;
          local_50[2] = DAT_089d7f38 + iVar3 + iVar6 + 0x70c;
          FUN_08907454(iVar1,iVar2 + -1,local_50 + 2);
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x1548;
      } while (iVar4 < 5);
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 5;
      iVar3 = iVar3 + 0x6a68;
    } while (iVar7 < 2);
  }
  else {
    local_30 = 0;
    iVar5 = 0;
    iVar3 = 0;
    local_40[2] = DAT_089d7f38;
    do {
      iVar7 = 0;
      iVar4 = 0;
      do {
        if (DAT_089d7f44 == *(char *)(DAT_089d7f40 + iVar5 + iVar7)) {
          local_40[0] = local_40[2] + iVar3 + iVar4 + 0x70c;
          local_40[1] = 0x1548;
          FUN_08907400(iVar1,0,local_40);
          local_40[2] = DAT_089d7f38;
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 0x1548;
      } while (iVar7 < 5);
      iVar5 = iVar5 + 5;
      local_30 = local_30 + 1;
      iVar3 = iVar3 + 0x6a68;
    } while (local_30 < 2);
    local_34 = 0xdbdc;
    FUN_08907454(iVar1,0,local_40 + 2);
  }
  return;
}

