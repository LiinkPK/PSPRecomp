/* Entry 0x08814FA0 | file offset 0x00011F78 | FUN_08814fa0 | bytes 512 */

undefined4 FUN_08814fa0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0x560) & 1) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x38c);
    uVar1 = *(uint *)(param_1 + 0x388);
    *(undefined4 *)(param_1 + 0x38c) = uVar2;
    *(uint *)(param_1 + 0x388) = uVar1 | 0x8000;
    *(undefined4 *)(param_1 + 0x38c) = uVar2;
    *(uint *)(param_1 + 0x388) = uVar1 | 0xc000;
    *(undefined4 *)(param_1 + 0x38c) = uVar2;
    *(uint *)(param_1 + 0x388) = uVar1 | 0x4c000;
    *(undefined4 *)(param_1 + 0x38c) = uVar2;
    *(uint *)(param_1 + 0x388) = uVar1 & 0xfffffffd | 0x4c000;
    if (*(int *)(*(int *)(param_1 + 0x568) + 0x3c) == 1) {
      *(uint *)(param_1 + 0x38c) = *(uint *)(param_1 + 0x38c) | 0x10;
      *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_1 + 0x388);
      *(uint *)(param_1 + 0x378) = *(uint *)(param_1 + 0x378) | 4;
    }
    *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | 2;
    FUN_08831994(param_1);
    if ((*(ushort *)(*(int *)(param_1 + 0x564) + 10) & 1) == 0) {
      FUN_088160b4(param_1);
      *(undefined4 *)(param_1 + 0x318) = 0;
      *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 1;
      *(undefined2 *)(param_1 + 0x524) = 0xffff;
      FUN_0886b240(*(undefined4 *)(param_1 + 0x394));
      FUN_0886ca58(*(undefined4 *)(param_1 + 0x394));
    }
    else {
      FUN_0881608c(param_1);
      *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 1;
      FUN_0886b230(*(undefined4 *)(param_1 + 0x394));
    }
    FUN_08824e24(param_1 + 0x570);
    FUN_08818070(param_1 + 0x5b0);
    if (((*(ushort *)(*(int *)(param_1 + 0x564) + 10) & 1) == 0) ||
       ((uVar1 = (*(uint *)(param_1 + 0x560) & 0xf0) >> 4 ^ 8, uVar1 != 10 && (uVar1 != 0xc)))) {
      FUN_0882130c(param_1 + 0x5dc);
    }
    if (*(int *)(param_1 + 0x5f4) != 0) {
      FUN_0881f128();
    }
    *(uint *)(param_1 + 0x560) = *(uint *)(param_1 + 0x560) & 0xffffff0f | 0x40;
    uVar2 = 0;
  }
  return uVar2;
}

