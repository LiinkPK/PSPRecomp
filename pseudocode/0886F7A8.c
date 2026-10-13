/* Entry 0x0886F7A8 | file offset 0x0006C780 | FUN_0886f7a8 | bytes 512 */

undefined4 FUN_0886f7a8(undefined4 param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 < 0x1bb78) {
    uVar4 = 1;
  }
  else {
    FUN_0886f5a4(param_1,DAT_08b63810);
    iVar7 = 0;
    do {
      cVar1 = (&DAT_08b63880)[iVar7];
      cVar2 = FUN_0886f5b4(param_1);
      (&DAT_08b63880)[iVar7] = cVar1 - cVar2;
      iVar5 = DAT_08b63808;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x1baf8);
    DAT_08b63808 = 0;
    iVar7 = FUN_0886f9a8(param_1,&DAT_08b63800,0x1bb78);
    if (iVar7 == iVar5) {
      if (DAT_08b63814 == 1) {
        if ((DAT_08b63804 == 0) || (3 < DAT_08b63804)) {
          uVar4 = 1;
        }
        else if ((DAT_08b63800 < 0) || (0xfd2 < DAT_08b63800)) {
          uVar4 = 1;
        }
        else {
          iVar5 = 0;
          iVar6 = 0;
          iVar7 = 0;
          while ((iVar3 = FUN_08871674(DAT_089d5ff0), iVar7 < iVar3 &&
                 (iVar3 = FUN_08871684(DAT_089d5ff0,iVar7), iVar3 != 0))) {
            if (((*(uint *)(iVar3 + 8) & 0xf0000000) != 0) &&
               ((int)(*(uint *)(iVar3 + 8) >> 0x1c) <= DAT_08b63804)) {
              iVar6 = iVar6 + 1;
              iVar3 = FUN_088716c8(DAT_089d5ff0,iVar3);
              iVar5 = iVar5 + iVar3;
            }
            iVar7 = iVar7 + 1;
          }
          if (iVar6 == DAT_08b63800) {
            if (iVar5 == DAT_08b6380c) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
          }
          else {
            uVar4 = 1;
          }
        }
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}

