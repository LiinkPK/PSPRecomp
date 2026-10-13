/* Entry 0x088170C0 | file offset 0x00014098 | FUN_088170c0 | bytes 1112 */

void FUN_088170c0(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short *psVar8;
  char local_80;
  char local_7f [15];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar3 = FUN_0881baa8();
  iVar3 = *(int *)(iVar3 + 0x118);
joined_r0x088170fc:
  if (iVar3 == 0) {
    return;
  }
  if ((*(int *)(iVar3 + 0x10) != 1) && (*(int *)(iVar3 + 0x10) != 3)) {
    iVar6 = *(int *)(iVar3 + 0x14);
    uVar7 = *(undefined4 *)(iVar6 + 0x46c);
    psVar8 = *(short **)(iVar6 + 0x564);
    if (((*(byte *)(iVar6 + 400) & 0x20) != 0) ||
       (bVar1 = false, (*(byte *)(iVar6 + 400) & 0x40) != 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      bVar1 = false;
      iVar6 = 0;
      do {
        iVar6 = FUN_08841f84(iVar6);
        if (iVar6 == 0) goto LAB_088172f0;
        bVar2 = false;
        if ((*(int *)(iVar6 + 0x478) != 0) &&
           (iVar4 = FUN_0883e9e4(uVar7,*(int *)(iVar6 + 0x478)), iVar4 != 0)) {
          bVar2 = true;
        }
        if (!bVar2) {
          iVar4 = 0;
          do {
            iVar5 = FUN_0884f6b8(iVar6 + 0xd64,iVar4);
            if (((iVar5 != 0) && (*(int *)(iVar5 + 0x478) != 0)) &&
               (iVar5 = FUN_0883e9e4(uVar7,*(int *)(iVar5 + 0x478)), iVar5 != 0)) {
              bVar2 = true;
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x10);
        }
      } while ((!bVar2) || (iVar4 = FUN_08816d54(param_1,(int)*psVar8,iVar6), iVar4 == 1));
      local_80 = '\0';
      FUN_08819624(iVar3,&local_80,0,iVar6,0,1000,1);
      bVar1 = true;
      if (local_80 != '\0') {
        iVar4 = FUN_08838074(iVar6);
        if (iVar4 == 0) {
          *(uint *)(iVar6 + 900) = *(uint *)(iVar6 + 900) | 0x1000000;
        }
        else {
          iVar6 = (**(code **)(*(int *)(iVar6 + 0x544) + 0x134))
                            (iVar6 + *(short *)(*(int *)(iVar6 + 0x544) + 0x130));
          *(uint *)(iVar6 + 900) = *(uint *)(iVar6 + 900) | 0x1000000;
        }
      }
LAB_088172f0:
      if (!bVar1) {
        iVar6 = 0;
LAB_088172fc:
        iVar6 = FUN_0880844c(iVar6);
        if (iVar6 == 0) goto LAB_088174dc;
        iVar4 = 0;
        if (*(short *)(iVar6 + 0x2c) == 2) {
          if ((*(uint *)(iVar6 + 0x10) & 0x100) == 0) goto LAB_088172fc;
          local_54 = 0;
          local_60 = *(undefined4 *)(iVar6 + 0xb8);
          (**(code **)(*(int *)(iVar6 + 0x70) + 0x14))
                    (&local_40,iVar6 + *(short *)(*(int *)(iVar6 + 0x70) + 0x10));
          local_70 = local_40;
          local_6c = local_3c;
          local_68 = local_38;
          local_64 = local_34;
          FUN_089a34c0(auStack_50,&local_70);
          local_5c = *(undefined4 *)(iVar6 + 0xb0);
          local_58 = *(undefined4 *)(iVar6 + 0xb4);
          iVar4 = FUN_0883ea64(uVar7,&local_60);
        }
        else if (*(short *)(iVar6 + 0x2c) == 1) {
          iVar4 = *(int *)(iVar6 + 0x18);
          if (((iVar4 == 0) || (*(char *)(iVar4 + 0x542) != '\x05')) ||
             (*(int *)(iVar4 + 0x478) == 0)) goto LAB_088172fc;
          iVar4 = FUN_0883e9e4(uVar7,*(int *)(iVar4 + 0x478));
        }
        if ((iVar4 != 0) &&
           (((iVar4 = *(int *)(iVar6 + 0x18), iVar4 == 0 ||
             (iVar5 = FUN_0883739c(iVar4), iVar5 != 1)) ||
            (iVar4 = FUN_08816d54(param_1,(int)*psVar8,iVar4), iVar4 != 1)))) goto LAB_08817498;
        goto LAB_088172fc;
      }
    }
  }
  goto LAB_088174dc;
LAB_08817498:
  local_7f[0] = '\0';
  FUN_08819624(iVar3,local_7f,0,*(undefined4 *)(iVar6 + 0x18),0,1000,1);
  if (local_7f[0] != '\0') {
    *(uint *)(*(int *)(iVar6 + 0x18) + 900) = *(uint *)(*(int *)(iVar6 + 0x18) + 900) | 0x1000000;
  }
LAB_088174dc:
  iVar3 = *(int *)(iVar3 + 4);
  goto joined_r0x088170fc;
}

