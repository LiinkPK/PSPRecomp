/* Entry 0x0888F6D4 | file offset 0x0008C6AC | FUN_0888f6d4 | bytes 196 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089ca6f4. Boundary still requires runtime validation. */

undefined4 FUN_0888f6d4(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)(param_1 + 4);
  uVar1 = 0;
  iVar3 = 0;
  param_1 = param_1 + 8;
  do {
    iVar4 = *(int *)(*piVar2 + 0x52c);
    if (((((*(byte *)(*(int *)(param_1 + 4) + 0x5b2) & 2) == 0) ||
         ((*(byte *)(*piVar2 + 0x5b9) & 1) != 1)) ||
        (*(short *)(iVar4 + 0x16) < *(short *)(iVar4 + 0x14))) ||
       ((float)(int)*(float *)(iVar4 + 0x1c) <= 0.0)) {
      *(undefined1 *)(piVar2 + 1) = 0;
    }
    else {
      *(undefined1 *)(piVar2 + 1) = 1;
      uVar1 = 1;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 2;
    param_1 = param_1 + -8;
  } while (iVar3 < 2);
  return uVar1;
}

