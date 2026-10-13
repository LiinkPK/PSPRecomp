/* Entry 0x088E2258 | file offset 0x000DF230 | FUN_088e2258 | bytes 28 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089cc4f4. Boundary still requires runtime validation. */

void FUN_088e2258(void)

{
  int unaff_s0;
  int unaff_s5;
  
  *(undefined4 *)(unaff_s0 + 0x1678) = *(undefined4 *)(unaff_s5 + 8);
  *(undefined1 *)(unaff_s0 + 0x17b0) = 1;
  *(undefined1 *)(unaff_s0 + 0x17af) = 1;
  *(undefined1 *)(unaff_s0 + 0x1268) = 1;
  switchD_088e1c8c::default();
  return;
}

