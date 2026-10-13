/* Entry 0x089BCAC4 | file offset 0x001B9A9C | FUN_089bcac4 | bytes 448 */

undefined4 FUN_089bcac4(int param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_30;
  undefined4 *local_2c [3];
  
  uVar3 = 0;
  if (param_1 != 0) {
    if ((param_2 & 2) == 0) {
      uVar3 = 1;
    }
    else {
      iVar4 = FUN_089bcda8(param_1,1,0);
      iVar5 = FUN_089bcdc0(param_1,1,0);
      iVar7 = *(int *)(param_1 + 0x10);
      if ((*(int *)(param_1 + 0xc) == 0) || (iVar4 != 0)) {
        bVar2 = false;
      }
      else {
        iVar4 = FUN_089bc2e0(*(int *)(param_1 + 0xc),1,0x80000001,param_3);
        *(undefined2 *)(iVar4 + 8) = 1;
        FUN_089bce14(param_1,iVar4);
        bVar2 = true;
      }
      if ((iVar7 == 0) || (iVar5 != 0)) {
        if (!bVar2) {
          return 1;
        }
        uVar1 = *(ushort *)(param_1 + 2);
      }
      else {
        iVar4 = FUN_089bc174(iVar7,1,0x80000001,param_3);
        *(undefined2 *)(iVar4 + 8) = 1;
        FUN_089bce74(param_1,iVar4);
        uVar1 = *(ushort *)(param_1 + 2);
      }
      uVar3 = 1;
      if ((uVar1 & 0x10) == 0) {
        local_30 = FUN_089bd8cc(param_1,0,0,0x80000001);
        local_30 = local_30 + 4;
        puVar6 = (undefined4 *)FUN_089bab64(param_3,2,4,local_30);
        local_2c[0] = puVar6;
        FUN_089bd8cc(param_1,local_2c,&local_30,0x80000001);
        *local_2c[0] = 0xb000000;
        local_2c[0] = local_2c[0] + 1;
        FUN_089bcedc(param_1,puVar6);
        thunk_FUN_089bb004(2,puVar6);
        sceKernelDcacheWritebackAll();
        return 1;
      }
    }
  }
  return uVar3;
}

