/* Entry 0x0898F540 | file offset 0x0018C518 | FUN_0898f540 | bytes 228 */

void FUN_0898f540(undefined4 *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(*(int *)(DAT_09b6f478 + 0x8c) + 0x18);
  if (iVar2 == 0) {
    iVar2 = *(int *)(DAT_09b6f478 + 0x90);
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x50);
    if (iVar2 != 0) {
      FUN_089a3efc(param_1,iVar2);
      return;
    }
    iVar2 = *(int *)(DAT_09b6f478 + 0x90);
  }
  iVar3 = *(int *)(DAT_09b6f478 + 0x8c);
  uVar1 = *(ushort *)(*(int *)(iVar2 + 8) + (*(int *)(iVar2 + 4) + 1) * 2);
  iVar2 = iVar3 + (uint)*(ushort *)(*(int *)(iVar2 + 8) + (*(int *)(iVar2 + 4) + 3) * 2);
  FUN_089a3ebc(param_1);
  *param_1 = *(undefined4 *)(iVar2 + 0x60);
  param_1[5] = *(undefined4 *)(iVar2 + 100);
  uVar4 = *(undefined4 *)(iVar2 + 0x68);
  param_1[0xf] = 0x3f800000;
  param_1[10] = uVar4;
  FUN_089a4094(param_1,&DAT_089da370,iVar3 + (uint)uVar1 + 0x60);
  return;
}

