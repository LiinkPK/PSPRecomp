/* Entry 0x089549C8 | file offset 0x001519A0 | FUN_089549c8 | bytes 172 */

void FUN_089549c8(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_2[1];
  fVar2 = param_2[2];
  fVar5 = param_3[1];
  iVar1 = *(int *)(param_1 + 0x8c) +
          (uint)*(ushort *)
                 (*(int *)(*(int *)(param_1 + 0x90) + 8) +
                 *(int *)(*(int *)(param_1 + 0x90) + 4) * 2);
  fVar4 = param_3[2];
  *(float *)(iVar1 + 0x60) = *param_3 * *param_2 * 0.01 + *(float *)(iVar1 + 0x60);
  *(float *)(iVar1 + 100) = fVar5 * fVar3 * 0.01 + *(float *)(iVar1 + 100);
  *(float *)(iVar1 + 0x68) = fVar4 * fVar2 * 0.01 + *(float *)(iVar1 + 0x68);
  *(float *)(iVar1 + 0x6c) = *(float *)(iVar1 + 0x6c) + 1.0;
  return;
}

