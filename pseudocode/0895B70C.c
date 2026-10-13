/* Entry 0x0895B70C | file offset 0x001586E4 | FUN_0895b70c | bytes 104 */

void FUN_0895b70c(float param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  
  pfVar2 = param_2 + 3;
  iVar1 = 0;
  pfVar3 = param_2;
  do {
    pfVar3 = pfVar3 + 1;
    param_3 = param_3 + 1;
    fVar4 = *pfVar2;
    iVar1 = iVar1 + 1;
    pfVar2 = pfVar2 + 1;
    *param_2 = fVar4 * param_1 * 0.5 * param_1 + *param_3 * param_1 + *pfVar3;
    param_2 = param_2 + 1;
  } while (iVar1 < 1);
  return;
}

