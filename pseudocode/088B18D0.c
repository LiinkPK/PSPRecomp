/* Entry 0x088B18D0 | file offset 0x000AE8A8 | FUN_088b18d0 | bytes 200 */

void FUN_088b18d0(int param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)FUN_089a00f4(0xc);
  uVar2 = FUN_089a04e8();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x1e0;
  puVar1[4] = 0x110;
  puVar1[5] = 0;
  FUN_089a12a4(0,2,3,0,0);
  FUN_089a03dc(1);
  FUN_089a0384(4);
  FUN_089a03dc(9);
  FUN_089a0c8c(*(int *)(param_1 + 0xc) << 0x18);
  FUN_089a0520(6,0x800100,2,0,puVar1);
  FUN_0899fdc4(uVar2);
  return;
}

