/* Entry 0x08874FAC | file offset 0x00071F84 | FUN_08874fac | bytes 368 */

void FUN_08874fac(float *param_1)

{
  undefined2 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((0.0 < param_1[3]) && (0.0 < param_1[0xc])) {
    puVar1 = (undefined2 *)FUN_089a00f4(0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0x1e0;
    fVar2 = param_1[0xc];
    puVar1[5] = 0;
    puVar1[4] = (short)(int)fVar2;
    puVar1[6] = 0;
    fVar2 = param_1[0xc];
    puVar1[8] = 0;
    puVar1[7] = 0x110 - (short)(int)fVar2;
    puVar1[9] = 0x1e0;
    puVar1[10] = 0x110;
    puVar1[0xb] = 0;
    fVar3 = *param_1;
    fVar5 = param_1[1];
    fVar4 = param_1[2];
    fVar2 = param_1[3];
    FUN_089a12a4(0,2,3,0,0);
    FUN_089a03dc(1);
    FUN_089a0384(4);
    FUN_089a03dc(9);
    FUN_089a0c8c((int)fVar5 << 8 | (int)fVar3 | (int)fVar2 << 0x18 | (int)fVar4 << 0x10);
    FUN_089a0520(6,0x800100,4,0,puVar1);
    FUN_089a0384(9);
  }
  return;
}

