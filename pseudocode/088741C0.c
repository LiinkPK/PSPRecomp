/* Entry 0x088741C0 | file offset 0x00071198 | FUN_088741c0 | bytes 400 */

void FUN_088741c0(int param_1,float *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  puVar1 = (undefined2 *)FUN_089a00f4(0xc);
  uVar2 = FUN_089a04e8();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x1e0;
  puVar1[4] = 0x110;
  puVar1[5] = 0;
  fVar5 = *param_2;
  fVar4 = param_2[1];
  fVar7 = param_2[2];
  fVar6 = param_2[3];
  iVar3 = *(int *)(param_1 + 0x230);
  if (iVar3 < 1) {
    if (-1 < iVar3) {
      FUN_089a12a4(0,2,3,0,0);
    }
  }
  else if (iVar3 < 2) {
    FUN_089a12a4(0,2,10,0,0xffffffff);
  }
  else if (iVar3 < 3) {
    FUN_089a12a4(2,2,10,0,0xffffffff);
  }
  FUN_089a03dc(1);
  FUN_089a0384(4);
  FUN_089a03dc(9);
  FUN_089a0c8c((int)fVar4 << 8 | (int)fVar5 | (int)fVar6 << 0x18 | (int)fVar7 << 0x10);
  FUN_089a0520(6,0x800100,2,0,puVar1);
  FUN_0899fdc4(uVar2);
  return;
}

