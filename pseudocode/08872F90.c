/* Entry 0x08872F90 | file offset 0x0006FF68 | FUN_08872f90 | bytes 244 */

void FUN_08872f90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  sceCtrlSetSamplingMode(1);
  sceCtrlSetSamplingCycle(0x411b);
  uVar1 = FUN_08882274(DAT_089d69a8);
  FUN_088823c4(uVar1,0xffffffff,15000,FUN_08872f08,"PAD_MANAGER::ReadTask");
  iVar5 = 0;
  puVar4 = &DAT_08b7f380;
  iVar2 = param_1;
  iVar3 = param_1;
  do {
    FUN_08935524(puVar4,&DAT_089c9888,0x1e0);
    *(int *)(iVar2 + 0x100) = iVar3;
    *(int *)(iVar2 + 0x108) = iVar5;
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 0x1e0;
    iVar3 = iVar3 + 0x60;
    iVar2 = iVar2 + 0x50;
  } while (iVar5 < 2);
  *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x254) = 0;
  FUN_08872e50(param_1,0);
  return;
}

