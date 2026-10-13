/* Entry 0x0881591C | file offset 0x000128F4 | FUN_0881591c | bytes 860 */

undefined4 FUN_0881591c(int param_1,int param_2,undefined1 *param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((*(uint *)(param_1 + 0x560) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else if (param_3 == (undefined1 *)0x0) {
    uVar1 = 0xfffffffe;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    do {
      puVar4 = (undefined1 *)FUN_088350ac(param_1,0,puVar4);
      if (puVar4 == (undefined1 *)0x0) break;
    } while (*(short *)(puVar4 + 6) != *(short *)(param_3 + 6));
    FUN_088372d0(param_1,*(short *)(param_3 + 6));
    uVar7 = FUN_089985b0(1,0,*param_3);
    *(uint *)(param_1 + 0x464) = *(uint *)(param_1 + 0x464) | (uint)((ulonglong)uVar7 >> 0x20);
    *(uint *)(param_1 + 0x460) = *(uint *)(param_1 + 0x460) | (uint)uVar7;
    if (puVar4 != (undefined1 *)0x0) {
      uVar6 = *(uint *)(param_1 + 0x464);
      uVar5 = *(uint *)(param_1 + 0x460);
      uVar7 = FUN_089985b0(1,0,*puVar4);
      *(uint *)(param_1 + 0x464) = uVar6 | (uint)((ulonglong)uVar7 >> 0x20);
      *(uint *)(param_1 + 0x460) = uVar5 | (uint)uVar7;
    }
    FUN_08831994(param_1);
    FUN_0886ca58(*(undefined4 *)(param_1 + 0x394));
    uVar1 = FUN_0881baa8();
    uVar1 = FUN_0881baa0(uVar1);
    iVar2 = FUN_0881e67c(DAT_089d4910,*(undefined4 *)(param_1 + 0x568),*(undefined2 *)(param_3 + 6))
    ;
    if ((param_4 == '\0') && (iVar2 != 0)) {
      iVar3 = FUN_08819e1c(uVar1);
      if ((iVar3 == 1) &&
         (((-1 < *(int *)(iVar2 + 4) &&
           (iVar3 = *(int *)(*(int *)(param_1 + 0x390) + 0x5c), iVar3 != 0)) &&
          (iVar3 = FUN_088a9de8(iVar3,*(int *)(iVar2 + 4),param_1 + 0x4c8,0,0), iVar3 != 0)))) {
        FUN_08819d70(uVar1,iVar3);
      }
      iVar3 = FUN_08819e1c(uVar1);
      if (((iVar3 == 1) && (-1 < *(int *)(iVar2 + 8))) &&
         ((*(int *)(DAT_089d6ae0 + 8) != 0 &&
          (iVar2 = FUN_088a9de8(*(int *)(DAT_089d6ae0 + 8),*(int *)(iVar2 + 8),param_1 + 0x4c8,0,0),
          iVar2 != 0)))) {
        FUN_08812664(auStack_80,param_1,param_3);
        local_60 = local_70;
        local_50 = local_70;
        local_5c = local_6c;
        local_4c = local_6c;
        local_58 = local_68;
        local_48 = local_68;
        local_44 = 0x3f800000;
        local_54 = 0x3f800000;
        FUN_088a7284(local_70,local_6c,local_68,iVar2);
        FUN_08819d70(uVar1,iVar2);
      }
    }
    FUN_08822b34(param_1 + 0x570,*(undefined2 *)(param_3 + 6),1);
    if ((param_2 != 0) && (iVar2 = FUN_0883739c(param_2), iVar2 == 1)) {
      iVar2 = FUN_08838074(param_2);
      if (iVar2 == 1) {
        iVar2 = (**(code **)(*(int *)(param_2 + 0x544) + 0x134))
                          (param_2 + *(short *)(*(int *)(param_2 + 0x544) + 0x130));
        *(uint *)(iVar2 + 900) = *(uint *)(iVar2 + 900) | 0x1000000;
      }
      else {
        *(uint *)(param_2 + 900) = *(uint *)(param_2 + 900) | 0x1000000;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

