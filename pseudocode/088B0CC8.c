/* Entry 0x088B0CC8 | file offset 0x000ADCA0 | FUN_088b0cc8 | bytes 908 */

void FUN_088b0cc8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_c0 [128];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined **local_2c;
  
  local_30 = param_2;
  iVar1 = FUN_088afbac();
  iVar7 = *(int *)(DAT_089d7260 + 0x14);
  local_34 = iVar7 + 0x10000;
  iVar3 = *(int *)(iVar7 + 0xea48);
  if ((0 < iVar3) && (iVar3 < 0x21)) {
    local_38 = iVar7 + 0x10000;
    iVar4 = *(int *)(iVar7 + 0xea4c);
    if ((-1 < iVar4) && (iVar4 < 3)) {
      local_3c = iVar7 + 0x10000;
      if ((0 < *(int *)(iVar7 + 0xea50)) && (*(int *)(iVar7 + 0xea50) < 0x21)) {
        local_40 = iVar7 + 0x10000;
        if ((-1 < *(int *)(iVar7 + 0xea54)) &&
           (((*(int *)(iVar7 + 0xea54) < 3 && (-1 < *(int *)(iVar7 + 0xea58))) &&
            (*(int *)(iVar7 + 0xea58) < iVar1)))) {
          uVar6 = *(undefined4 *)(DAT_089d712c + 0xee0);
          iVar1 = 0;
          iVar5 = param_1 + 0x100;
          if (local_30 != 0) {
            uVar2 = FUN_0887afbc(uVar6,4,0);
            FUN_08935bb4(param_1 + 0x100,uVar2,0x400);
            iVar1 = FUN_089359e8(iVar5);
            FUN_08935bb4(iVar1 + param_1 + 0x100,local_30,0x400 - iVar1);
            iVar1 = FUN_089359e8(iVar5);
            FUN_08935bb4(iVar1 + param_1 + 0x100,&DAT_089cb758,0x400 - iVar1);
            iVar1 = FUN_089359e8(iVar5);
            iVar3 = *(int *)(local_34 + -0x15b8);
            iVar4 = *(int *)(local_38 + -0x15b4);
          }
          local_2c = &PTR_caseD_893c500_089d0000;
          uVar2 = FUN_088afb8c(iVar3,iVar4);
          uVar2 = FUN_0887afbc(uVar6,uVar2,0);
          FUN_08935bb4(iVar1 + param_1 + 0x100,uVar2,0x400 - iVar1);
          iVar1 = FUN_089359e8(iVar5);
          uVar2 = FUN_0887afbc(uVar6,0x25,0);
          FUN_08935bb4(iVar1 + param_1 + 0x100,uVar2,0x400 - iVar1);
          iVar1 = FUN_089359e8(iVar5);
          uVar2 = FUN_088afb8c(*(undefined4 *)(local_3c + -0x15b0),
                               *(undefined4 *)(local_40 + -0x15ac));
          uVar2 = FUN_0887afbc(uVar6,uVar2,0);
          FUN_08935bb4(iVar1 + param_1 + 0x100,uVar2,0x400 - iVar1);
          iVar1 = FUN_089359e8(iVar5);
          FUN_08935bb4(iVar1 + param_1 + 0x100,&DAT_089cb758,0x400 - iVar1);
          iVar1 = FUN_089359e8(iVar5);
          uVar2 = FUN_0887afbc(uVar6,0x26,0);
          FUN_08935bb4(iVar1 + param_1 + 0x100,uVar2,0x400 - iVar1);
          iVar1 = FUN_089359e8(iVar5);
          uVar2 = FUN_088afbb4(*(undefined4 *)(iVar7 + 0xea58));
          uVar2 = FUN_0887afbc(uVar6,uVar2,0);
          FUN_08935bb4(iVar1 + param_1 + 0x100,uVar2,0x400 - iVar1);
          iVar1 = FUN_089359e8(iVar5);
          FUN_08935bb4(iVar1 + param_1 + 0x100,&DAT_089cb758,0x400 - iVar1);
          iVar1 = FUN_089359e8(iVar5);
          uVar6 = FUN_0887afbc(uVar6,0x24,0);
          FUN_08935bb4(iVar1 + param_1 + 0x100,uVar6,0x400 - iVar1);
          iVar1 = FUN_089359e8(iVar5);
          FUN_088abaf4(local_2c[0x1c4b],auStack_c0,0x80,*(undefined4 *)(iVar7 + 0xea5c));
          FUN_0893fdcc(iVar1 + param_1 + 0x100,0x400 - iVar1,auStack_c0);
          FUN_089359e8(iVar5);
        }
      }
    }
  }
  return;
}

