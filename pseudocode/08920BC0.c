/* Entry 0x08920BC0 | file offset 0x0011DB98 | FUN_08920bc0 | bytes 344 */

void FUN_08920bc0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = FUN_08831320(0x570);
  puVar3 = *(undefined4 **)(param_1 + 0xc);
  iVar4 = 0;
  if (iVar1 != 0) {
    func_0x08b34478(iVar1,*puVar3);
    puVar3 = *(undefined4 **)(param_1 + 0xc);
    iVar4 = iVar1;
  }
  puVar3[1] = iVar4;
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(uint *)(iVar4 + 900) = *(uint *)(iVar4 + 900) | 0x4000000;
  func_0x08b348f4(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x48),
                  *(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
  FUN_0882fac4(0x41000000,0,*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x130,
               *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x4c),0);
  uVar2 = func_0x08b4a59c(param_2,*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc) = uVar2;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
  puVar3 = (undefined4 *)FUN_08925384(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
  local_40 = *puVar3;
  local_3c = puVar3[1];
  local_38 = puVar3[2];
  local_34 = 0x3f800000;
  FUN_088359a8(uVar2,&local_40,1);
  iVar4 = *(int *)(param_1 + 0xc);
  FUN_089216f4(&local_24,param_1);
  local_30 = local_24;
  local_2c = local_20;
  local_28 = local_1c;
  FUN_089a34c0(iVar4 + 0x20,&local_30);
  return;
}

