/* Entry 0x08807E6C | file offset 0x00004E44 | FUN_08807e6c | bytes 600 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_08807e6c(int param_1,int param_2,int param_3,char param_4,char param_5)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  iVar3 = FUN_08813120(param_1,param_3,param_2);
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 == 0) {
    (**(code **)(*(int *)(param_2 + 0x544) + 0x1bc))
              (param_2 + *(short *)(*(int *)(param_2 + 0x544) + 0x1b8),param_1,param_3,iVar3);
    uVar7 = *(uint *)(param_1 + 0x10);
  }
  else {
    (**(code **)(*(int *)(iVar6 + 0x544) + 0x1b4))
              (iVar6 + *(short *)(*(int *)(iVar6 + 0x544) + 0x1b0),param_1,param_3,iVar3,param_2);
    uVar7 = *(uint *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0x10) = uVar7 | 2;
  if ((-1 < *(int *)(param_3 + 0x30)) &&
     (puVar4 = (undefined4 *)FUN_088a24d4(1,*(int *)(param_3 + 0x30),1,0),
     puVar4 != (undefined4 *)0x0)) {
    FUN_08838d14(&local_40,param_2);
    *puVar4 = local_40;
    puVar4[0xd] = puVar4[0xd] & 0xfffffdff;
    puVar4[1] = local_3c;
    puVar4[2] = local_38;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[0xd] = puVar4[0xd] & 0xfffffdff;
  }
  if (*(char *)(param_3 + 0x15) != '\0') {
    FUN_088749a0((float)*(byte *)(param_3 + 0x16) / 100.0,(float)*(byte *)(param_3 + 0x17) / 100.0,
                 *(char *)(param_3 + 0x15),1);
  }
  uVar2 = _DAT_08acf110;
  bVar1 = *(byte *)(param_3 + 0x14);
  if ((bVar1 != 0) && (param_5 == '\x01')) {
    iVar6 = *(int *)(param_1 + 0x18);
    if (*(char *)(iVar6 + 0x542) == '\x03') {
      iVar6 = *(int *)(iVar6 + 0x5d4);
    }
    if (*(char *)(iVar6 + 0x542) != '\x01') {
      uVar5 = FUN_088378e8(iVar6);
      func_0x08aceef4((float)bVar1,uVar2,uVar5);
    }
  }
  if (param_4 != '\0') {
    *(uint *)(iVar3 + 0x28) = *(uint *)(iVar3 + 0x28) | 2;
  }
  return iVar3;
}

