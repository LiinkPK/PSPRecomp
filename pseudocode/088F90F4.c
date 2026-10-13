/* Entry 0x088F90F4 | file offset 0x000F60CC | FUN_088f90f4 | bytes 412 */

void FUN_088f90f4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x105c) = 0;
  uVar3 = (uint)((*(uint *)(DAT_089d726c + 0x74) & 0x40000) != 0);
  *(uint *)(param_1 + 0x105c) = uVar3;
  uVar2 = 0;
  if ((*(uint *)(DAT_089d726c + 0x74) & 0x80000) != 0) {
    uVar2 = 2;
  }
  uVar3 = uVar3 | uVar2;
  *(uint *)(param_1 + 0x105c) = uVar3;
  uVar2 = 0;
  if ((*(uint *)(DAT_089d726c + 0x74) & 0x100000) != 0) {
    uVar2 = 4;
  }
  uVar3 = uVar3 | uVar2;
  *(uint *)(param_1 + 0x105c) = uVar3;
  uVar2 = 0;
  if ((*(uint *)(DAT_089d726c + 0x74) & 0x200000) != 0) {
    uVar2 = 8;
  }
  uVar3 = uVar3 | uVar2;
  *(uint *)(param_1 + 0x105c) = uVar3;
  uVar2 = 0;
  if ((*(uint *)(DAT_089d726c + 0x74) & 0x400000) != 0) {
    uVar2 = 0x10;
  }
  uVar3 = uVar3 | uVar2;
  *(uint *)(param_1 + 0x105c) = uVar3;
  uVar2 = 0;
  if ((*(uint *)(DAT_089d726c + 0x74) & 0x800000) != 0) {
    uVar2 = 0x20;
  }
  uVar3 = uVar3 | uVar2;
  *(uint *)(param_1 + 0x105c) = uVar3;
  uVar2 = 0;
  iVar1 = FUN_088f28e8();
  if (iVar1 != 0) {
    uVar2 = 0x40;
  }
  uVar3 = uVar3 | uVar2;
  *(uint *)(param_1 + 0x105c) = uVar3;
  uVar2 = 0;
  iVar1 = FUN_088f2914();
  if (iVar1 != 0) {
    uVar2 = 0x80;
  }
  uVar3 = uVar3 | uVar2;
  *(uint *)(param_1 + 0x105c) = uVar3;
  uVar2 = 0;
  if ((*(uint *)(DAT_089d726c + 0x74) & 0x20000) != 0) {
    uVar2 = 0x100;
  }
  *(uint *)(param_1 + 0x105c) = uVar3 | uVar2;
  return;
}

