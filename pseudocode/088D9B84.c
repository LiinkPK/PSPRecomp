/* Entry 0x088D9B84 | file offset 0x000D6B5C | FUN_088d9b84 | bytes 136 */

void FUN_088d9b84(int param_1,float *param_2)

{
  ushort uVar1;
  float fVar2;
  
  if ((*param_2 == 1.0) && (param_2[5] == 1.0)) {
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x400;
    uVar1 = *(ushort *)(param_1 + 0x20);
    fVar2 = *param_2;
  }
  else {
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfbff;
    uVar1 = *(ushort *)(param_1 + 0x20);
    fVar2 = *param_2;
  }
  *(float *)(param_1 + 0x18) = fVar2;
  *(float *)(param_1 + 0x1c) = param_2[5];
  *(float *)(param_1 + 0x10) = param_2[0xc];
  fVar2 = param_2[0xd];
  *(ushort *)(param_1 + 0x20) = uVar1 & 0xf7ff;
  *(float *)(param_1 + 0x14) = fVar2;
  return;
}

