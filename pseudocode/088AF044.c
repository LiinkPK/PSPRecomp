/* Entry 0x088AF044 | file offset 0x000AC01C | FUN_088af044 | bytes 140 */

void FUN_088af044(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(iVar1 + 0x2b6c) != 0) {
    FUN_0885c538(*(undefined4 *)(iVar1 + 0x2b70),*(int *)(iVar1 + 0x2b6c),0);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b6c) = 0;
    iVar1 = *(int *)(param_1 + 0xc);
  }
  if (*(int *)(iVar1 + 0x2b64) != 0) {
    FUN_0885c538(*(undefined4 *)(iVar1 + 0x2b70),*(int *)(iVar1 + 0x2b64),0);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b64) = 0;
    iVar1 = *(int *)(param_1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x2b70) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b74) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b78) = 0;
  return;
}

