/* Entry 0x088AD2B0 | file offset 0x000AA288 | FUN_088ad2b0 | bytes 432 */

void FUN_088ad2b0(int param_1)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 local_20;
  
  puVar2 = (undefined2 *)FUN_089a00f4(0x40);
  bVar1 = (byte)*(uint *)(param_1 + 0xee8) & 3;
  if ((*(uint *)(param_1 + 0xee8) & 4) == 0) {
    bVar1 = 3 - bVar1;
  }
  local_20 = CONCAT13(bVar1 * ' ' + -0x61,0x808080);
  puVar2[0x10] = 0;
  *puVar2 = 0;
  puVar2[0x18] = 0x80;
  puVar2[8] = 0x80;
  puVar2[9] = 0;
  puVar2[1] = 0;
  puVar2[0x19] = 0x20;
  puVar2[0x11] = 0x20;
  *(undefined4 *)(puVar2 + 2) = local_20;
  *(undefined4 *)(puVar2 + 10) = local_20;
  *(undefined4 *)(puVar2 + 0x12) = local_20;
  *(undefined4 *)(puVar2 + 0x1a) = local_20;
  puVar2[0x14] = 0x15c;
  puVar2[4] = 0x15c;
  puVar2[0x1c] = 0x1dc;
  puVar2[0xc] = 0x1dc;
  puVar2[0xd] = 0xf0;
  puVar2[5] = 0xf0;
  puVar2[0x1d] = 0x110;
  puVar2[0x15] = 0x110;
  puVar2[0x1e] = 0;
  puVar2[0x16] = 0;
  puVar2[0xe] = 0;
  puVar2[6] = 0;
  uVar3 = FUN_089a04e8();
  FUN_089a0384(4);
  FUN_089a0384(0x15);
  FUN_089a113c(6,0,0xff);
  FUN_089a0384(0);
  FUN_089a03dc(1);
  FUN_089a03dc(5);
  FUN_089a0e20(0,1);
  FUN_089a0e60(1,1);
  FUN_0899d2f8(*(undefined4 *)(param_1 + 0xee4));
  FUN_089a12a4(0,2,3,0,0);
  FUN_089a0520(4,0x80011e,4,0,puVar2);
  FUN_0899fdc4(uVar3);
  return;
}

