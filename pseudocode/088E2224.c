/* Entry 0x088E2224 | file offset 0x000DF1FC | FUN_088e2224 | bytes 28 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089cc4f0. Boundary still requires runtime validation. */

void FUN_088e2224(void)

{
  undefined4 uVar1;
  int unaff_s0;
  int unaff_s5;
  
  uVar1 = *(undefined4 *)(unaff_s5 + 8);
  *(undefined1 *)(unaff_s0 + 0x17b0) = 0;
  *(undefined4 *)(unaff_s0 + 0x1678) = uVar1;
  *(undefined1 *)(unaff_s0 + 0x17af) = 1;
  *(undefined1 *)(unaff_s0 + 0x1268) = 1;
  switchD_088e1c8c::default();
  return;
}

