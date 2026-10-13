/* Entry 0x08908A30 | file offset 0x00105A08 | FUN_08908a30 | bytes 296 */

void FUN_08908a30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_08908b58(param_1);
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x260) = param_4;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined1 *)(param_1 + 0x25c) = 0;
  *(undefined1 *)(param_1 + 0x25d) = 0;
  uVar1 = FUN_0885c6cc(param_4,param_3,0,0,1,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  FUN_08935524(uVar1,param_2);
  uVar1 = FUN_0885c6cc(param_4,param_3,0,0,1,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  puVar2 = (undefined4 *)(param_1 + 0x40);
  do {
    uVar1 = FUN_0885c6cc(param_4,param_3,0,0,1,0);
    *puVar2 = uVar1;
    puVar2[1] = param_3;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 8;
  } while (iVar3 < 0x10);
  uVar1 = sceNetAdhocctlAddHandler(FUN_08909078,param_1);
  *(undefined4 *)(param_1 + 0x24c) = uVar1;
  return;
}

