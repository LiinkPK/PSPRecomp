/* Entry 0x08828C98 | file offset 0x00025C70 | FUN_08828c98 | bytes 320 */

undefined4 FUN_08828c98(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float *local_20;
  
  FUN_08828c50();
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 < 1)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0885c6cc(param_2,param_4,0,0,1,0);
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 8) = param_2;
    if (iVar1 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      FUN_08935524(iVar1,param_3,param_4);
      local_20 = (float *)(*(int *)(param_1 + 4) + 4);
      iVar1 = FUN_08935b50(*(int *)(param_1 + 4),PTR_DAT_089d493c,4);
      if (iVar1 == 0) {
        fVar3 = *local_20;
        local_20 = local_20 + 1;
        if (fVar3 == 1.0) {
          iVar1 = FUN_08819ad0(param_1 + 0xc,param_1 + 0x10,&local_20,8);
          if (iVar1 == 0) {
            *param_1 = 1;
            uVar2 = 0;
          }
          else {
            uVar2 = 0xfffffffb;
          }
        }
        else {
          uVar2 = 0xfffffffc;
        }
      }
      else {
        uVar2 = 0xfffffffd;
      }
    }
  }
  return uVar2;
}

