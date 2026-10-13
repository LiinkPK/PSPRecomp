/* Entry 0x08903684 | file offset 0x0010065C | FUN_08903684 | bytes 392 */

undefined4 FUN_08903684(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_30 [4];
  int *local_20;
  int local_1c;
  
  iVar3 = param_2[2];
  FUN_0890418c();
  iVar1 = sceNetAdhocMatchingInit(iVar3 * 9 + 0x834);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    local_30[0] = 3;
    local_30[1] = 1;
    local_30[2] = 2;
    iVar1 = sceNetAdhocMatchingCreate
                      (local_30[*param_2],param_2[1],param_2[3] & 0xffff,iVar3 * 2,5000000,10000000,
                       0x1e,2000000,FUN_08904980);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      *param_1 = iVar1;
      param_1[0x44] = param_2[2];
      iVar1 = param_2[5];
      param_1[0x43] = iVar1;
      if (iVar1 == 0) {
        iVar1 = FUN_088821c0();
        param_1[0x43] = iVar1;
      }
      local_1c = 0;
      local_20 = param_1;
      do {
        iVar1 = FUN_0885c6cc(param_1[0x43],param_2[2],0,0,1,0);
        local_20[4] = iVar1;
        local_1c = local_1c + 1;
        local_20 = local_20 + 4;
      } while (local_1c < 0x10);
      iVar1 = 1;
      if ((char)param_2[4] == '\x01') {
        iVar1 = param_2[1] + -1;
      }
      param_1[0x62] = iVar1;
      uVar2 = 1;
      DAT_089d8148 = param_1;
    }
  }
  return uVar2;
}

